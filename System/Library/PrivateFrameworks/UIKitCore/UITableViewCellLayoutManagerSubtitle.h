//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface UITableViewCellLayoutManagerSubtitle
{
}

- (struct CGSize)intrinsicContentSizeForCell:(id)arg1 rowWidth:(double)arg2;	// IMP=0x0000000000cf7f26
- (void)layoutSubviewsOfCell:(id)arg1;	// IMP=0x0000000000cf7c02
- (void)getTextLabelRect:(struct CGRect *)arg1 detailTextLabelRect:(struct CGRect *)arg2 forCell:(id)arg3 rowWidth:(double)arg4 forSizing:(_Bool)arg5;	// IMP=0x0000000000cf77f3
- (double)_textLabelYAdjustmentForCell:(id)arg1 totalTextRect:(struct CGRect)arg2;	// IMP=0x0000000000cf76d7
- (id)defaultDetailTextLabelFontForCell:(id)arg1;	// IMP=0x0000000000cf7647
- (id)detailTextLabelForCell:(id)arg1;	// IMP=0x0000000000cf7487
- (id)textLabelForCell:(id)arg1;	// IMP=0x0000000000cf7449
- (id)imageViewForCell:(id)arg1;	// IMP=0x0000000000cf740b
- (double)defaultDetailTextLabelFontSizeForCell:(id)arg1;	// IMP=0x0000000000cf73fd
- (double)defaultTextLabelFontSizeForCell:(id)arg1;	// IMP=0x0000000000cf7375

@end

