//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TrialServer/NSCopying-Protocol.h>
#import <TrialServer/TRITaskAttributing-Protocol.h>

@class NSString, TRIDownloadOptions;

@interface TRITaskAttributionInternalInsecure : NSObject <TRITaskAttributing, NSCopying>
{
    int _triCloudKitContainer;	// 8 = 0x8
    NSString *_teamIdentifier;	// 16 = 0x10
    NSString *_applicationBundleIdentifier;	// 24 = 0x18
    TRIDownloadOptions *_networkOptions;	// 32 = 0x20
}

+ (id)taskAttributionWithTeamIdentifier:(id)arg1 triCloudKitContainer:(int)arg2 applicationBundleIdentifier:(id)arg3 networkOptions:(id)arg4;	// IMP=0x0000000000006991
+ (id)taskAttributionFirstPartyWithNetworkOptions:(id)arg1;	// IMP=0x00000000000872a9
+ (id)taskAttributionFromPersistedTask:(id)arg1;	// IMP=0x0000000000102d6f
- (void).cxx_destruct;	// IMP=0x0000000000006eef
@property(readonly, nonatomic) TRIDownloadOptions *networkOptions; // @synthesize networkOptions=_networkOptions;
@property(readonly, nonatomic) NSString *applicationBundleIdentifier; // @synthesize applicationBundleIdentifier=_applicationBundleIdentifier;
@property(readonly, nonatomic) int triCloudKitContainer; // @synthesize triCloudKitContainer=_triCloudKitContainer;
@property(readonly, nonatomic) NSString *teamIdentifier; // @synthesize teamIdentifier=_teamIdentifier;
- (id)init;	// IMP=0x0000000000006ec2
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000006d55
- (_Bool)isEqualToTaskAttribution:(id)arg1;	// IMP=0x0000000000006b78
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000006b6d
- (id)copyWithReplacementNetworkOptions:(id)arg1;	// IMP=0x0000000000006b15
- (id)copyWithReplacementApplicationBundleIdentifier:(id)arg1;	// IMP=0x0000000000006abd
- (id)copyWithReplacementTriCloudKitContainer:(int)arg1;	// IMP=0x0000000000006a80
- (id)copyWithReplacementTeamIdentifier:(id)arg1;	// IMP=0x0000000000006a28
- (id)initWithTeamIdentifier:(id)arg1 triCloudKitContainer:(int)arg2 applicationBundleIdentifier:(id)arg3 networkOptions:(id)arg4;	// IMP=0x00000000000067da
- (id)asPersistedTaskAttribution;	// IMP=0x0000000000103099

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

