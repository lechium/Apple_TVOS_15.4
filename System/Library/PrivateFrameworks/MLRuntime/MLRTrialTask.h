//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class TRIClient;

@interface MLRTrialTask : NSObject
{
    TRIClient *_triClient;	// 8 = 0x8
}

+ (void)initialize;	// IMP=0x0000000000002253
- (void).cxx_destruct;	// IMP=0x0000000000002549
@property(readonly, nonatomic) TRIClient *triClient; // @synthesize triClient=_triClient;
- (id)description;	// IMP=0x00000000000024cd
- (id)initWithTrialTask:(id)arg1;	// IMP=0x0000000000002389
- (id)initWithTriClient:(id)arg1;	// IMP=0x00000000000022a4

@end
