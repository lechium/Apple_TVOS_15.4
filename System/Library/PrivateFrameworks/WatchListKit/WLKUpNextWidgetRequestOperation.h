//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class WLKUpNextItemCollection;

@interface WLKUpNextWidgetRequestOperation
{
    WLKUpNextItemCollection *_itemCollection;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000017de
@property(readonly, nonatomic) WLKUpNextItemCollection *itemCollection; // @synthesize itemCollection=_itemCollection;
- (void)processResponse;	// IMP=0x00000000000016be
- (id)initWithQueryParameters:(id)arg1 options:(long long)arg2;	// IMP=0x00000000000015c9
- (id)init;	// IMP=0x00000000000015b0

@end
