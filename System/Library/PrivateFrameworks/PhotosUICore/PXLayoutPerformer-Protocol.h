//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, PXLayoutPerformerOutput;

@protocol PXLayoutPerformer
+ (struct CGSize)performLayoutWithLayoutInput:(CDStruct_392cfed4)arg1 layoutOutput:(PXLayoutPerformerOutput *)arg2 usingBlock:(void (^)(id <PXLayoutPerformer>))arg3;
@property(readonly, nonatomic) NSArray *children;
@property(retain, nonatomic) PXLayoutPerformerOutput *layoutOutput;
@property(nonatomic) CDStruct_392cfed4 layoutInput;
- (void)prepareForReuse;
- (struct CGSize)performLayout;
@end

