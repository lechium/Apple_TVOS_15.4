//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CommonUtilities/NSSecureCoding-Protocol.h>

@class NSObject;
@protocol OS_os_log;

@interface CUTCheckpointSignpost <NSSecureCoding>
{
    NSObject<OS_os_log> *_log;	// 32 = 0x20
    unsigned long long _signpostID;	// 40 = 0x28
    long long _scope;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000003aa1
@property(nonatomic) long long scope; // @synthesize scope=_scope;
@property(nonatomic) unsigned long long signpostID; // @synthesize signpostID=_signpostID;
@property(retain, nonatomic) NSObject<OS_os_log> *log; // @synthesize log=_log;
- (_Bool)_verifyMatchingName:(id)arg1;	// IMP=0x0000000000003910
- (id)initWithName:(id)arg1 uniqueIdentifier:(id)arg2;	// IMP=0x00000000000037f1

@end

