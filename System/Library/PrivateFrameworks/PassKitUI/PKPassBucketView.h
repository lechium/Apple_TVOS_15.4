//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray, PKPass, PKPassBucketTemplate, PKPassColorProfile;

@interface PKPassBucketView : UIView
{
    NSArray *_fieldViews;	// 8 = 0x8
    NSMutableArray *_currentFieldViews;	// 16 = 0x10
    long long _background;	// 24 = 0x18
    PKPass *_pass;	// 32 = 0x20
    PKPassColorProfile *_colorProfile;	// 40 = 0x28
    PKPassBucketTemplate *_bucketTemplate;	// 48 = 0x30
    NSArray *_bucket;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000007a6d1
@property(retain, nonatomic) NSArray *bucket; // @synthesize bucket=_bucket;
@property(retain, nonatomic) PKPassBucketTemplate *bucketTemplate; // @synthesize bucketTemplate=_bucketTemplate;
@property(retain, nonatomic) PKPassColorProfile *colorProfile; // @synthesize colorProfile=_colorProfile;
@property(retain, nonatomic) PKPass *pass; // @synthesize pass=_pass;
- (void)_presentRecursiveDiff:(id)arg1 inView:(id)arg2 forSubviewAtIndex:(unsigned long long)arg3 withSubviews:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x000000000007a45c
- (void)presentDiff:(id)arg1 inView:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000007a42f
- (long long)_backgroundForBucketTemplate:(id)arg1;	// IMP=0x000000000007a369
- (void)_updateSubviews;	// IMP=0x0000000000079ebb
- (id)_fieldViewsByWidth;	// IMP=0x0000000000079db7
- (void)_measureAndFitVariablySizedSubviews;	// IMP=0x0000000000078e65
- (void)_measureAndFitEvenlySizedSubviews;	// IMP=0x0000000000078705
- (void)layoutSubviews;	// IMP=0x0000000000077ec9
- (id)description;	// IMP=0x0000000000077b58
- (void)dealloc;	// IMP=0x0000000000077b29

@end

