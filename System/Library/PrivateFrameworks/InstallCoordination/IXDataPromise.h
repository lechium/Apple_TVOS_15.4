//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <InstallCoordination/NSSecureCoding-Protocol.h>

@class IXDataPromiseSeed, NSError, NSString, NSUUID;

@interface IXDataPromise : NSObject <NSSecureCoding>
{
    _Bool _complete;	// 8 = 0x8
    NSError *_error;	// 16 = 0x10
    unsigned long long _errorSourceIdentifier;	// 24 = 0x18
    IXDataPromiseSeed *_seed;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000414c5
+ (id)outstandingPromisesForCreator:(unsigned long long)arg1;	// IMP=0x0000000000042db7
- (void).cxx_destruct;	// IMP=0x0000000000042d8f
@property(retain, nonatomic) IXDataPromiseSeed *seed; // @synthesize seed=_seed;
@property(nonatomic) unsigned long long errorSourceIdentifier; // @synthesize errorSourceIdentifier=_errorSourceIdentifier;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
- (oneway void)_clientDelegate_didCancelWithError:(id)arg1 client:(unsigned long long)arg2;	// IMP=0x0000000000042d18
- (oneway void)_clientDelegate_didComplete;	// IMP=0x0000000000042d07
- (_Bool)preflightWithError:(id *)arg1;	// IMP=0x0000000000042990
- (void)preflightWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000427b3
- (_Bool)resetWithError:(id *)arg1;	// IMP=0x0000000000042459
- (void)resetWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000042094
- (_Bool)cancelForReason:(id)arg1 client:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x0000000000041bc6
- (_Bool)cancelForReason:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000041bac
- (void)cancelForReason:(id)arg1 client:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000041842
- (void)cancelForReason:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000041828
- (id)description;	// IMP=0x000000000004170f
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000041649
- (unsigned long long)hash;	// IMP=0x0000000000041605
- (id)initWithName:(id)arg1 client:(unsigned long long)arg2 diskSpaceNeeded:(unsigned long long)arg3;	// IMP=0x00000000000414cd
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000004144c
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000041370
@property(nonatomic) double percentComplete; // @dynamic percentComplete;
@property(readonly, nonatomic) _Bool localIsComplete; // @dynamic localIsComplete;
@property(nonatomic, getter=isComplete) _Bool complete; // @synthesize complete=_complete;
@property(readonly, nonatomic) NSError *localError; // @dynamic localError;
@property(readonly, nonatomic) NSError *errorOccurred;
@property(readonly, nonatomic) unsigned long long totalBytesNeededOnDisk; // @dynamic totalBytesNeededOnDisk;
@property(readonly, nonatomic) NSUUID *uniqueIdentifier; // @dynamic uniqueIdentifier;
@property(readonly, nonatomic) unsigned long long creatorIdentifier; // @dynamic creatorIdentifier;
@property(readonly, copy, nonatomic) NSString *name; // @dynamic name;
@property(readonly, nonatomic) Class seedClass;
- (void)dealloc;	// IMP=0x000000000003fd69
- (void)_updateInitWithSeed:(id)arg1 notifyDaemon:(_Bool)arg2;	// IMP=0x000000000003fc16
- (id)initWithSeed:(id)arg1;	// IMP=0x000000000003fb69

@end
