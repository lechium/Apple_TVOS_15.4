//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <InstallCoordination/IXCoordinatorWithImportance-Protocol.h>
#import <InstallCoordination/IXCoordinatorWithInstallOptions-Protocol.h>

@class NSString;

@interface IXDemotingAppInstallCoordinator <IXCoordinatorWithInstallOptions, IXCoordinatorWithImportance>
{
}

+ (void)enumerateCoordinatorsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000240e9
+ (_Bool)enumerateCoordinatorsWithError:(id *)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000240cc
+ (id)existingCoordinatorForAppWithBundleID:(id)arg1 error:(id *)arg2;	// IMP=0x000000000002409e
+ (id)coordinatorForAppWithBundleID:(id)arg1 withClientID:(unsigned long long)arg2 createIfNotExisting:(_Bool)arg3 created:(_Bool *)arg4 error:(id *)arg5;	// IMP=0x0000000000024077
- (id)validInstallTypes;	// IMP=0x0000000000024103

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool hasInstallOptions;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

