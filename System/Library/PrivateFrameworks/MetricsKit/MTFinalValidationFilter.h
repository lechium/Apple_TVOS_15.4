//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MetricsKit/MTEventFilter-Protocol.h>

@class NSString;

@interface MTFinalValidationFilter <MTEventFilter>
{
    _Bool _shouldApplyDeRes;	// 8 = 0x8
}

@property(nonatomic) _Bool shouldApplyDeRes; // @synthesize shouldApplyDeRes=_shouldApplyDeRes;
- (id)apply:(id)arg1;	// IMP=0x00000000000330f3
- (void)validateFields:(id)arg1;	// IMP=0x0000000000032e28

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
