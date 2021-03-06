//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MKMapItemIdentifier, MKPlaceCompactCollectionViewModel;

@interface MKPlaceBatchableCompactCollection : NSObject
{
    MKMapItemIdentifier *_guideLocationIdentifier;	// 8 = 0x8
    MKPlaceCompactCollectionViewModel *_viewModel;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000016b953
@property(retain, nonatomic) MKPlaceCompactCollectionViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(readonly, nonatomic) MKMapItemIdentifier *guideLocationIdentifier; // @synthesize guideLocationIdentifier=_guideLocationIdentifier;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000016b7fc
- (id)description;	// IMP=0x000000000016b72c
- (id)initWithWorldwideViewModel:(id)arg1;	// IMP=0x000000000016b6c1
- (id)initWithIdentifier:(id)arg1;	// IMP=0x000000000016b656

@end

