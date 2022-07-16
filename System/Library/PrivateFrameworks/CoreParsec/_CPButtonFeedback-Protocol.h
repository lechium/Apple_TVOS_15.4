//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreParsec/NSObject-Protocol.h>

@class NSData, NSDictionary, NSString;

@protocol _CPButtonFeedback <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(nonatomic) unsigned long long timestamp;
@property(nonatomic) unsigned long long uniqueId;
@property(copy, nonatomic) NSString *commandDetail;
@property(nonatomic) int commandType;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
@end

