//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapKit/UITextViewDelegate-Protocol.h>

@class GEOComposedAdvisoryItem, NSString, UIImageView, UIStackView;

__attribute__((visibility("hidden")))
@interface MKIncidentExtendedDetailCell <UITextViewDelegate>
{
    UIStackView *_stackView;	// 8 = 0x8
    UIImageView *_imageView;	// 16 = 0x10
    GEOComposedAdvisoryItem *_advisoryItem;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000087ef0
- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3 interaction:(long long)arg4;	// IMP=0x0000000000087e82
- (void)_setConstraints;	// IMP=0x000000000008797f
- (id)aggregatedDetailsFor:(id)arg1;	// IMP=0x00000000000877a3
- (id)customBodyTextView;	// IMP=0x000000000008752f
- (void)configureWithAdvisoryItem:(id)arg1;	// IMP=0x000000000008693b
- (void)configureWithGEOAdvisoryCard:(id)arg1;	// IMP=0x0000000000086570
- (void)configureWithGEORouteIncident:(id)arg1;	// IMP=0x0000000000085eed
- (id)initWithReuseIdentifier:(id)arg1;	// IMP=0x0000000000085c72

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

