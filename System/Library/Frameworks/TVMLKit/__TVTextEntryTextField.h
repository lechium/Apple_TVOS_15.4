//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITextField.h>

@interface __TVTextEntryTextField : UITextField
{
    _Bool _allowsFocus;	// 8 = 0x8
    unsigned long long _maxLength;	// 16 = 0x10
}

@property(nonatomic) unsigned long long maxLength; // @synthesize maxLength=_maxLength;
@property(nonatomic) _Bool allowsFocus; // @synthesize allowsFocus=_allowsFocus;
- (struct _NSRange)_filteredRangeForText:(id)arg1;	// IMP=0x000000000003de5c
- (struct _NSRange)insertFilteredText:(id)arg1;	// IMP=0x000000000003ddb9
- (void)insertText:(id)arg1;	// IMP=0x000000000003dda7
- (void)setText:(id)arg1;	// IMP=0x000000000003dd10
- (id)text;	// IMP=0x000000000003dc1e
- (_Bool)canBecomeFocused;	// IMP=0x000000000003db62
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000003db12

@end
