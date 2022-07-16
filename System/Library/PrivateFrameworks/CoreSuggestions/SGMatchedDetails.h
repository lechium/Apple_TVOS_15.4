//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreSuggestions/NSCopying-Protocol.h>
#import <CoreSuggestions/NSSecureCoding-Protocol.h>

@class NSDictionary;

@interface SGMatchedDetails : NSObject <NSCopying, NSSecureCoding>
{
    NSDictionary *_tokenDetailMap;	// 8 = 0x8
    NSDictionary *_detailTokenMap;	// 16 = 0x10
}

+ (long long)tokenMatchedDetailTypeForContact:(id)arg1 contactEntityId:(id)arg2 detailEntityId:(id)arg3 matchedDetailReader:(id)arg4 phraseNumber:(unsigned int)arg5 token:(id)arg6;	// IMP=0x0000000000038400
+ (long long)tokenMatchedDetailTypeForContact:(id)arg1 matchedDetailReader:(id)arg2 phraseNumber:(unsigned int)arg3 token:(id)arg4;	// IMP=0x00000000000381fa
+ (long long)tokensMatchedDetailTypeForContact:(id)arg1 contactEntityId:(id)arg2 detailEntityId:(id)arg3 matchinfoData:(id)arg4 tokens:(id)arg5;	// IMP=0x0000000000037f3d
+ (id)matchedDetailsWithContact:(id)arg1 matchinfoData:(id)arg2 tokens:(id)arg3;	// IMP=0x0000000000037eaf
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000037ea7
- (void).cxx_destruct;	// IMP=0x0000000000037c5b
- (id)description;	// IMP=0x0000000000037c1b
- (unsigned long long)hash;	// IMP=0x0000000000037c05
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000037be2
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000379ad
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000037945
- (_Bool)isEqualToMatchedDetails:(id)arg1;	// IMP=0x000000000003792b
- (void)_processRawData:(id)arg1 tokens:(id)arg2 contact:(id)arg3 tokenDetailMap:(id)arg4;	// IMP=0x00000000000373a4
- (void)_addToTokenDetailMap:(id)arg1 token:(id)arg2 detail:(id)arg3;	// IMP=0x000000000003729e
- (id)tokensForDetail:(id)arg1;	// IMP=0x000000000003724a
- (id)matchedDetailsForToken:(id)arg1;	// IMP=0x00000000000371f6
- (void)_initilizeDictionariesFromTokenDetailMap:(id)arg1;	// IMP=0x000000000003710e
- (id)initWithContact:(id)arg1 matchinfoData:(id)arg2 tokens:(id)arg3;	// IMP=0x0000000000036f00
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000036ef5
- (id)init;	// IMP=0x0000000000036e6e

@end

