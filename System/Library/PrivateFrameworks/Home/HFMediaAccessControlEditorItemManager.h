//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HFMediaAccessControlEditorItemModule;

@interface HFMediaAccessControlEditorItemManager
{
    HFMediaAccessControlEditorItemModule *_accessControlEditorItemModule;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000002768ec
@property(readonly, nonatomic) HFMediaAccessControlEditorItemModule *accessControlEditorItemModule; // @synthesize accessControlEditorItemModule=_accessControlEditorItemModule;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;	// IMP=0x0000000000276847
- (id)_buildItemProvidersForHome:(id)arg1;	// IMP=0x00000000002767cd
- (id)initWithDelegate:(id)arg1 home:(id)arg2;	// IMP=0x0000000000276735
- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2;	// IMP=0x0000000000276680

@end

