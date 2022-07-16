//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface PDAssertion : NSObject
{
    _Bool _invalidateWhenBackgrounded;	// 8 = 0x8
    unsigned long long _type;	// 16 = 0x10
    NSString *_identifier;	// 24 = 0x18
    NSString *_reason;	// 32 = 0x20
    double _createdAt;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000003cd0e3
@property(readonly, nonatomic) double createdAt; // @synthesize createdAt=_createdAt;
@property(nonatomic) _Bool invalidateWhenBackgrounded; // @synthesize invalidateWhenBackgrounded=_invalidateWhenBackgrounded;
@property(readonly, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (id)description;	// IMP=0x00000000003ccf96
- (id)initWithType:(unsigned long long)arg1 identifier:(id)arg2 reason:(id)arg3;	// IMP=0x00000000003ccec8

@end

