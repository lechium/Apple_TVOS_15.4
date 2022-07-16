//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Trial/NSCopying-Protocol.h>
#import <Trial/NSSecureCoding-Protocol.h>

@class TRIEvaluationStatus, TRIMLRuntimeEvaluation;

@interface TRIMLRuntimeEvaluationHistoryRecord : NSObject <NSCopying, NSSecureCoding>
{
    TRIMLRuntimeEvaluation *_evaluation;	// 8 = 0x8
    TRIEvaluationStatus *_status;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000045e6e
+ (id)recordWithEvaluation:(id)arg1 status:(id)arg2;	// IMP=0x0000000000045b68
- (void).cxx_destruct;	// IMP=0x00000000000461e0
@property(readonly, nonatomic) TRIEvaluationStatus *status; // @synthesize status=_status;
@property(readonly, nonatomic) TRIMLRuntimeEvaluation *evaluation; // @synthesize evaluation=_evaluation;
- (id)init;	// IMP=0x00000000000461c6
- (id)description;	// IMP=0x0000000000046182
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000004611f
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000045e76
- (unsigned long long)hash;	// IMP=0x0000000000045e27
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000045dbf
- (_Bool)isEqualToRecord:(id)arg1;	// IMP=0x0000000000045c81
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000045c76
- (id)copyWithReplacementStatus:(id)arg1;	// IMP=0x0000000000045c25
- (id)copyWithReplacementEvaluation:(id)arg1;	// IMP=0x0000000000045bd4
- (id)initWithEvaluation:(id)arg1 status:(id)arg2;	// IMP=0x00000000000459e0

@end
