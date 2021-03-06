//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VoiceShortcuts/MTLModel-Protocol.h>

@class NSDictionary, NSString, NSValueTransformer;

@protocol MTLJSONSerializing <MTLModel>
+ (NSDictionary *)JSONKeyPathsByPropertyKey;

@optional
+ (Class)classForParsingJSONDictionary:(NSDictionary *)arg1;
+ (NSValueTransformer *)JSONTransformerForKey:(NSString *)arg1;
@end

