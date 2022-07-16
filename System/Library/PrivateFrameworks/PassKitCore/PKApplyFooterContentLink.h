//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSCopying-Protocol.h>

@class NSString, NSURL;

@interface PKApplyFooterContentLink : NSObject <NSCopying>
{
    NSString *_linkText;	// 8 = 0x8
    NSURL *_linkURL;	// 16 = 0x10
    NSString *_termsIdentifier;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000004327ee
@property(copy, nonatomic) NSString *termsIdentifier; // @synthesize termsIdentifier=_termsIdentifier;
@property(copy, nonatomic) NSURL *linkURL; // @synthesize linkURL=_linkURL;
@property(copy, nonatomic) NSString *linkText; // @synthesize linkText=_linkText;
- (id)description;	// IMP=0x00000000004326ae
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000432605
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000043251e

@end
