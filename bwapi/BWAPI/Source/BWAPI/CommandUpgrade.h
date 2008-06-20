#pragma once

#include "Command.h"

#include <BW/UpgradeType.h>

namespace BWAPI
{
  /** BWAPI internal representation of upgrade command. */
  class CommandUpgrade : public Command
  {
    public :
      /** 
       * @param building Building thatupgrades
       * @param upgrade Upgrade to be invented
       */
      CommandUpgrade(Unit* building, BW::UpgradeType upgrade);
      ~CommandUpgrade();
      virtual void execute();
      BWAPI::CommandTypes::Enum getType();
      std::string describe();
    private :
      BW::UpgradeType upgrade;
  };
}