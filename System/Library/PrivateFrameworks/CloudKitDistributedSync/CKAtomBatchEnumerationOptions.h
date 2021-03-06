//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSNumber;

@interface CKAtomBatchEnumerationOptions : NSObject
{
    NSNumber *_atomType;	// 8 = 0x8
    NSData *_siteIdentifierModifier;	// 16 = 0x10
}

+ (id)optionsWithSiteIdentifierModifier:(id)arg1;	// IMP=0x00000000000f743c
+ (id)optionsWithAtomType:(unsigned long long)arg1;	// IMP=0x00000000000f73cf
- (void).cxx_destruct;	// IMP=0x00000000000f74c3
@property(copy, nonatomic) NSData *siteIdentifierModifier; // @synthesize siteIdentifierModifier=_siteIdentifierModifier;
@property(nonatomic) NSNumber *atomType; // @synthesize atomType=_atomType;

@end

