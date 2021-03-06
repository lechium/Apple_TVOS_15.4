//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FrontBoard/FBSceneClientProvider-Protocol.h>

@class FBSSceneClientSettings, FBSSceneSettings, FBSceneClientProviderInvalidationAction, FBSceneRemnant;
@protocol FBSceneClient, FBSceneHost;

@protocol FBSceneClientProviderInternal <FBSceneClientProvider>
- (void)unregisterHost:(id <FBSceneHost>)arg1;
- (id <FBSceneClient>)registerHost:(id <FBSceneHost>)arg1 settings:(FBSSceneSettings *)arg2 initialClientSettings:(FBSSceneClientSettings *)arg3 fromRemnant:(FBSceneRemnant *)arg4 error:(out id *)arg5;
- (void)registerInvalidationAction:(FBSceneClientProviderInvalidationAction *)arg1;
@end

