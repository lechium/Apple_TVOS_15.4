//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaMiningKit/CLSClassificationBasedSignalModel-Protocol.h>

@class CLSSignalNode, NSString;

@interface CLSSDModel : NSObject <CLSClassificationBasedSignalModel>
{
    unsigned long long _version;	// 8 = 0x8
    unsigned long long _minimumSupportedVersion;	// 16 = 0x10
    CLSSignalNode *_foodDrinkNode;	// 24 = 0x18
    CLSSignalNode *_landscapeCityscapeNode;	// 32 = 0x20
}

+ (unsigned long long)latestVersion;	// IMP=0x000000000008d295
+ (unsigned long long)currentAnalyzerVersion;	// IMP=0x000000000008d283
+ (id)name;	// IMP=0x000000000008d276
+ (id)modelWithVersion:(unsigned long long)arg1;	// IMP=0x000000000008d247
- (void).cxx_destruct;	// IMP=0x000000000008d1cc
@property(readonly) unsigned long long minimumSupportedVersion; // @synthesize minimumSupportedVersion=_minimumSupportedVersion;
@property(readonly) unsigned long long version; // @synthesize version=_version;
- (id)modelInfo;	// IMP=0x000000000008d105
- (void)processSignals:(id)arg1 intoProcessedSignals:(id)arg2;	// IMP=0x000000000008d0ff
- (_Bool)isResponsibleForSignalIdentifier:(unsigned long long)arg1;	// IMP=0x000000000008d0ea
- (id)nodeForSignalIdentifier:(unsigned long long)arg1;	// IMP=0x000000000008d02c
- (void)setupVersion51_4;	// IMP=0x000000000008cf6f
- (void)setupVersion33;	// IMP=0x000000000008ceb2
- (id)initWithVersion:(unsigned long long)arg1;	// IMP=0x000000000008cda7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
