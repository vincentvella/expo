// Copyright 2018-present 650 Industries. All rights reserved.

#import <ABI36_0_0UMCore/ABI36_0_0UMEventEmitter.h>
#import <ABI36_0_0UMCore/ABI36_0_0UMExportedModule.h>
#import <ABI36_0_0UMCore/ABI36_0_0UMInternalModule.h>
#import <ABI36_0_0UMCore/ABI36_0_0UMModuleRegistryConsumer.h>

#import <ABI36_0_0UMTaskManagerInterface/ABI36_0_0UMTaskManagerInterface.h>

@interface ABI36_0_0EXTaskManager : ABI36_0_0UMExportedModule <ABI36_0_0UMInternalModule, ABI36_0_0UMEventEmitter, ABI36_0_0UMModuleRegistryConsumer, ABI36_0_0UMTaskManagerInterface>

- (instancetype)initWithExperienceId:(NSString *)experienceId NS_DESIGNATED_INITIALIZER;

@end
