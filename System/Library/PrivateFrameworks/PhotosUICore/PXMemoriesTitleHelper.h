//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface PXMemoriesTitleHelper : NSObject
{
    NSString *_softLineBreak;	// 8 = 0x8
    NSString *_truncationToken;	// 16 = 0x10
    long long _preferredLineLength;	// 24 = 0x18
    double _minimumScaleFactor;	// 32 = 0x20
}

+ (id)defaultHelper;	// IMP=0x00000000006d8f00
- (void).cxx_destruct;	// IMP=0x00000000006d8c22
@property(nonatomic) double minimumScaleFactor; // @synthesize minimumScaleFactor=_minimumScaleFactor;
@property(nonatomic) long long preferredLineLength; // @synthesize preferredLineLength=_preferredLineLength;
@property(copy, nonatomic) NSString *truncationToken; // @synthesize truncationToken=_truncationToken;
@property(copy, nonatomic) NSString *softLineBreak; // @synthesize softLineBreak=_softLineBreak;
- (_Bool)_isTextLongerThanPreferredLine:(id)arg1 range:(struct _NSRange)arg2 minimumScaleFactor:(double)arg3;	// IMP=0x00000000006d8a46
- (id)titleForDisplayableText:(id)arg1 titleCategory:(long long)arg2 options:(unsigned long long)arg3;	// IMP=0x00000000006d8523
- (id)displayableTextForTitle:(id)arg1 intent:(long long)arg2;	// IMP=0x00000000006d8405
- (id)init;	// IMP=0x00000000006d8384

@end

