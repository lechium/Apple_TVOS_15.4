//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Intents/NSCopying-Protocol.h>

@class NSString;

@interface INJSONEncoderConfiguration : NSObject <NSCopying>
{
    _Bool _locationIncludesTimestamp;	// 8 = 0x8
    NSString *_languageCode;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000002d80d8
@property(nonatomic) _Bool locationIncludesTimestamp; // @synthesize locationIncludesTimestamp=_locationIncludesTimestamp;
@property(copy, nonatomic) NSString *languageCode; // @synthesize languageCode=_languageCode;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002d8059
- (id)init;	// IMP=0x00000000002d8021

@end

