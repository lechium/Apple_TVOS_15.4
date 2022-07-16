//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Trial/NSCopying-Protocol.h>
#import <Trial/NSSecureCoding-Protocol.h>

@class NSDate, NSString, TRIFactorsState;

@interface TRIEvaluationStatus : NSObject <NSCopying, NSSecureCoding>
{
    unsigned char _type;	// 8 = 0x8
    NSString *_evaluationId;	// 16 = 0x10
    NSDate *_date;	// 24 = 0x18
    TRIFactorsState *_evalState;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000009720
+ (id)defaultProvider;	// IMP=0x0000000000009409
+ (id)freshProvider;	// IMP=0x00000000000093f0
- (void).cxx_destruct;	// IMP=0x0000000000009b96
@property(readonly, nonatomic) TRIFactorsState *evalState; // @synthesize evalState=_evalState;
@property(readonly, nonatomic) NSDate *date; // @synthesize date=_date;
@property(readonly, nonatomic) NSString *evaluationId; // @synthesize evaluationId=_evaluationId;
@property(readonly, nonatomic) unsigned char type; // @synthesize type=_type;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000098c4
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000009728
- (unsigned long long)hash;	// IMP=0x00000000000096b8
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000094ce
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000094c3
- (id)initWithType:(unsigned char)arg1 evaluationId:(id)arg2 date:(id)arg3 evalState:(id)arg4;	// IMP=0x00000000000091c1

@end

