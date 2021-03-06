//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIPrintOptionListDelegate-Protocol.h>

@class NSArray, NSIndexPath, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface UIPrintPresetsOption <UIPrintOptionListDelegate>
{
    NSArray *_presets;	// 8 = 0x8
    NSIndexPath *_selectedIndexPath;	// 16 = 0x10
    NSMutableArray *_presetNames;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000007f1589
@property(retain, nonatomic) NSMutableArray *presetNames; // @synthesize presetNames=_presetNames;
@property(retain, nonatomic) NSIndexPath *selectedIndexPath; // @synthesize selectedIndexPath=_selectedIndexPath;
@property(retain, nonatomic) NSArray *presets; // @synthesize presets=_presets;
- (void)didSelectPrintOption;	// IMP=0x00000000007f14ee
- (id)summary;	// IMP=0x00000000007f1433
- (void)updatePrinterInfo;	// IMP=0x00000000007f1372
- (void)setCurrentPrinter:(id)arg1;	// IMP=0x00000000007f1259
- (id)supportedPresets;	// IMP=0x00000000007f0b81
- (void)listItemSelected:(id)arg1;	// IMP=0x00000000007f09c3
- (id)selectedItem;	// IMP=0x00000000007f09b1
- (id)itemList;	// IMP=0x00000000007f094e
- (id)printOptionTableViewCell;	// IMP=0x00000000007f07ea
- (_Bool)shouldShow;	// IMP=0x00000000007f04bc
- (id)initWithPrintInfo:(id)arg1 printPanelViewController:(id)arg2;	// IMP=0x00000000007f03c4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

