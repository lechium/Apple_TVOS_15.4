//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class IXOwnedDataPromiseSeed, NSError, NSString, NSURL;

@interface IXSOwnedDataPromise
{
    _Bool _stagedPathMayNotExistWhenAwakening;	// 8 = 0x8
    NSString *_relativeStagedPath;	// 16 = 0x10
    NSString *_targetLastPathComponent;	// 24 = 0x18
    NSError *_awakeningError;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0020000000022238
- (void).cxx_destruct;	// IMP=0x0010000000022e17
@property(retain, nonatomic) NSError *awakeningError; // @synthesize awakeningError=_awakeningError;
@property(nonatomic) _Bool stagedPathMayNotExistWhenAwakening; // @synthesize stagedPathMayNotExistWhenAwakening=_stagedPathMayNotExistWhenAwakening;
@property(retain, nonatomic) NSURL *stagedPath; // @dynamic stagedPath;
- (void)_internal_setStagedPath:(id)arg1;	// IMP=0x0010000000022ab1
@property(retain, nonatomic) NSString *targetLastPathComponent; // @synthesize targetLastPathComponent=_targetLastPathComponent;
@property(retain, nonatomic) NSString *relativeStagedPath; // @synthesize relativeStagedPath=_relativeStagedPath;
@property(readonly, nonatomic) NSURL *stagingBaseDir; // @dynamic stagingBaseDir;
- (void)decommission;	// IMP=0x00100000000226d5
- (void)setComplete:(_Bool)arg1;	// IMP=0x001000000002235c
- (void)cancelForReason:(id)arg1 client:(unsigned long long)arg2;	// IMP=0x00100000000222b8
- (void)reset;	// IMP=0x0010000000022240
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000022152
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000021f92
- (id)initWithSeed:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000021cd9
- (_Bool)_onQueue_initWithSeedWithError:(id *)arg1;	// IMP=0x0010000000021c81
- (void)_onQueue_purgeStagingBaseDirKeepingBaseDir:(_Bool)arg1;	// IMP=0x00100000000219e0
- (_Bool)_onQueue_createStagingBaseDirWithError:(id *)arg1;	// IMP=0x0010000000021435
- (_Bool)awakeFromSerializationWithLookupBlock:(CDUnknownBlockType)arg1 error:(id *)arg2;	// IMP=0x0010000000023706
- (oneway void)_remote_getTargetLastPathComponent:(CDUnknownBlockType)arg1;	// IMP=0x00100000000235ec
- (oneway void)_remote_setTargetLastPathComponent:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000233ea
- (oneway void)_remote_getStagedPath:(CDUnknownBlockType)arg1;	// IMP=0x0010000000023269
- (oneway void)_remote_setStagedPath:(id)arg1;	// IMP=0x0010000000022e59

// Remaining properties
@property(readonly, copy, nonatomic) IXOwnedDataPromiseSeed *clientSeed; // @dynamic clientSeed;
@property(retain, nonatomic) IXOwnedDataPromiseSeed *seed; // @dynamic seed;

@end

