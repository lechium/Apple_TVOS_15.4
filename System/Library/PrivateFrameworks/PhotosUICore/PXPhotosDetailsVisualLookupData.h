//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface PXPhotosDetailsVisualLookupData : NSObject
{
    NSString *_displayMessage;	// 8 = 0x8
    NSString *_glyphImageName;	// 16 = 0x10
    NSString *_visualDomain;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000191fcf
@property(copy, nonatomic) NSString *visualDomain; // @synthesize visualDomain=_visualDomain;
@property(copy, nonatomic) NSString *glyphImageName; // @synthesize glyphImageName=_glyphImageName;
@property(copy, nonatomic) NSString *displayMessage; // @synthesize displayMessage=_displayMessage;
- (id)description;	// IMP=0x0000000000191ece
- (unsigned long long)hash;	// IMP=0x0000000000191e41
- (_Bool)_isEqualToVisualLookupData:(id)arg1;	// IMP=0x0000000000191cda
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000191c46
- (id)initWithGlyphName:(id)arg1 visualDomain:(id)arg2 displayMessage:(id)arg3;	// IMP=0x0000000000191b8f
- (id)init;	// IMP=0x0000000000191b76

@end

