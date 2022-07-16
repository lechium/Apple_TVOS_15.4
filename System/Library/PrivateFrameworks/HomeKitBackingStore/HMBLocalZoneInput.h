//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitBackingStore/HMFLogging-Protocol.h>

@class HMBLocalSQLContextInputBlock, HMBLocalZone, NSString;

@interface HMBLocalZoneInput : HMFObject <HMFLogging>
{
    HMBLocalZone *_localZone;	// 8 = 0x8
    HMBLocalSQLContextInputBlock *_inputBlock;	// 16 = 0x10
    unsigned long long _stagedChangesCount;	// 24 = 0x18
}

+ (id)logCategory;	// IMP=0x0000000000084ba9
- (void).cxx_destruct;	// IMP=0x0000000000084b78
@property unsigned long long stagedChangesCount; // @synthesize stagedChangesCount=_stagedChangesCount;
@property(readonly) HMBLocalSQLContextInputBlock *inputBlock; // @synthesize inputBlock=_inputBlock;
@property(readonly) HMBLocalZone *localZone; // @synthesize localZone=_localZone;
- (id)attributeDescriptions;	// IMP=0x0000000000084994
- (id)logIdentifier;	// IMP=0x00000000000848ad
- (void)abort;	// IMP=0x00000000000847ac
- (id)commitWithOptions:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000842fc
- (_Bool)stageRemovalForModelWithID:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000840f3
- (void)dealloc;	// IMP=0x0000000000083f8f
- (id)initWithLocalZone:(id)arg1 inputBlock:(id)arg2;	// IMP=0x0000000000083ec6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
