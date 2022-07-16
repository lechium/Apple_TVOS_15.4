//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface AMSRatingsStoreFront : NSObject
{
    NSString *_defaultLanguage;	// 8 = 0x8
    unsigned long long _mediaType;	// 16 = 0x10
    NSString *_name;	// 24 = 0x18
    NSArray *_ratingSystems;	// 32 = 0x20
    NSString *_storeFront;	// 40 = 0x28
    NSString *_storeFrontID;	// 48 = 0x30
    NSArray *_supportedLanguages;	// 56 = 0x38
}

+ (id)storeFrontWithDictionary:(id)arg1 mediaType:(unsigned long long)arg2;	// IMP=0x00000000001eda21
+ (id)storeFrontWithDictionary:(id)arg1 mediaType:(unsigned long long)arg2 andStoreFront:(id)arg3;	// IMP=0x00000000001ed9a2
- (void).cxx_destruct;	// IMP=0x00000000001edc3b
@property(readonly, nonatomic) NSArray *supportedLanguages; // @synthesize supportedLanguages=_supportedLanguages;
@property(readonly, nonatomic) NSString *storeFrontID; // @synthesize storeFrontID=_storeFrontID;
@property(readonly, nonatomic) NSString *storeFront; // @synthesize storeFront=_storeFront;
@property(readonly, nonatomic) NSArray *ratingSystems; // @synthesize ratingSystems=_ratingSystems;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) unsigned long long mediaType; // @synthesize mediaType=_mediaType;
@property(readonly, nonatomic) NSString *defaultLanguage; // @synthesize defaultLanguage=_defaultLanguage;
- (id)description;	// IMP=0x00000000001eda7d
- (id)initWithDictionary:(id)arg1 mediaType:(unsigned long long)arg2;	// IMP=0x00000000001ed834
- (id)initWithDictionary:(id)arg1 mediaType:(unsigned long long)arg2 andStoreFront:(id)arg3;	// IMP=0x00000000001ed6c6

@end

