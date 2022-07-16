//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CXPlayDTMFCallAction
{
    NSString *_digits;	// 8 = 0x8
    long long _type;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000001e7f0
- (void).cxx_destruct;	// IMP=0x000000000001ea46
@property(nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *digits; // @synthesize digits=_digits;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001e901
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001e7f8
- (void)updateSanitizedCopy:(id)arg1 withZone:(struct _NSZone *)arg2;	// IMP=0x000000000001e733
- (id)customDescription;	// IMP=0x000000000001e67a
- (id)initWithCallUUID:(id)arg1 digits:(id)arg2 type:(long long)arg3;	// IMP=0x000000000001e5aa

@end

