//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIActivityIndicatorView, _MKUILabel;

__attribute__((visibility("hidden")))
@interface MKTransitLoadingTableViewCell
{
    _MKUILabel *_loadingLabel;	// 8 = 0x8
    UIActivityIndicatorView *_loadingIndicator;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000012bdb0
- (void)stopAnimating;	// IMP=0x000000000012bd93
- (void)startAnimating;	// IMP=0x000000000012bd76
- (void)dealloc;	// IMP=0x000000000012bd14
- (id)initWithReuseIdentifier:(id)arg1;	// IMP=0x000000000012b6b7

@end

