//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate;

@interface CXEndCallAction
{
    NSDate *_dateEnded;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000046244
- (void).cxx_destruct;	// IMP=0x00000000000463ea
@property(copy, nonatomic) NSDate *dateEnded; // @synthesize dateEnded=_dateEnded;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000004630f
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000004624c
- (void)updateSanitizedCopy:(id)arg1 withZone:(struct _NSZone *)arg2;	// IMP=0x00000000000461a6
- (void)updateAsFulfilledWithDateEnded:(id)arg1;	// IMP=0x0000000000046154
- (void)fulfillWithDateEnded:(id)arg1;	// IMP=0x000000000004608e
- (void)fulfill;	// IMP=0x000000000004603b
- (id)customDescription;	// IMP=0x0000000000045faf

@end

