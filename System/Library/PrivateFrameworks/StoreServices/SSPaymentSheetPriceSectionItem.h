//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <StoreServices/NSCopying-Protocol.h>

@class NSString;

@interface SSPaymentSheetPriceSectionItem : NSObject <NSCopying>
{
    NSString *_label;	// 8 = 0x8
    NSString *_price;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000012b0a0
@property(copy) NSString *price; // @synthesize price=_price;
@property(copy) NSString *label; // @synthesize label=_label;
- (id)initWithXPCEncoding:(id)arg1;	// IMP=0x000000000012af83
- (id)copyXPCEncoding;	// IMP=0x000000000012af3d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000012aec4
- (void)_parseDictionary:(id)arg1 withCaseControl:(_Bool)arg2;	// IMP=0x000000000012ad7e
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000012acca

@end

