//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface GEOPlaceCollectionPullQuote : NSObject
{
    NSString *_plainTextDescription;	// 8 = 0x8
    NSString *_htmlDescription;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000318612
@property(readonly, nonatomic) NSString *htmlDescription; // @synthesize htmlDescription=_htmlDescription;
@property(readonly, nonatomic) NSString *plainTextDescription; // @synthesize plainTextDescription=_plainTextDescription;
- (id)initWithPlainText:(id)arg1 htmlText:(id)arg2;	// IMP=0x000000000031851d

@end

