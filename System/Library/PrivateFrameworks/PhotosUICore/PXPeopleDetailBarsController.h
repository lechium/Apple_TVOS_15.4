//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PHPerson, UIButton;

@interface PXPeopleDetailBarsController
{
    UIButton *_peopleTitleView;	// 8 = 0x8
    PHPerson *_person;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000472272
@property(retain, nonatomic) PHPerson *person; // @synthesize person=_person;
@property(retain, nonatomic) UIButton *peopleTitleView; // @synthesize peopleTitleView=_peopleTitleView;
- (id)createAssetActionManager;	// IMP=0x00000000004721a5
- (id)createTitleView;	// IMP=0x0000000000472193

@end
