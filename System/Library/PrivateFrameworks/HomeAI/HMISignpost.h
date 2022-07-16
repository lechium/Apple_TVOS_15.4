//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeAI/HMFLogging-Protocol.h>

@class NSDate, NSString, NSUUID;

@interface HMISignpost : HMFObject <HMFLogging>
{
    NSString *_name;	// 8 = 0x8
    NSDate *_beginDate;	// 16 = 0x10
    unsigned long long _signpostIdentifier;	// 24 = 0x18
    NSUUID *_identifier;	// 32 = 0x20
}

+ (id)logCategory;	// IMP=0x000000000001b9cf
- (void).cxx_destruct;	// IMP=0x000000000001bab0
@property(readonly, copy) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(readonly) unsigned long long signpostIdentifier; // @synthesize signpostIdentifier=_signpostIdentifier;
@property(readonly) NSDate *beginDate; // @synthesize beginDate=_beginDate;
@property(readonly, copy) NSString *name; // @synthesize name=_name;
- (id)logIdentifier;	// IMP=0x000000000001b9d9
- (void)end;	// IMP=0x000000000001b878
- (void)begin;	// IMP=0x000000000001b6de
- (_Bool)hasBegun;	// IMP=0x000000000001b6ab
- (_Bool)shouldSignpost;	// IMP=0x000000000001b619
- (id)signpostLog;	// IMP=0x000000000001b60f
- (id)initWithName:(id)arg1 deferred:(_Bool)arg2;	// IMP=0x000000000001b470
- (id)initWithName:(id)arg1;	// IMP=0x000000000001b45c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
