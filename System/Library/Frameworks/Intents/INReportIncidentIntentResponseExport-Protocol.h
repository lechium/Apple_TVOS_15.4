//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/JSExport-Protocol.h>
#import <Intents/NSObject-Protocol.h>

@class CLPlacemark, NSArray;

@protocol INReportIncidentIntentResponseExport <NSObject, JSExport>
@property(copy, nonatomic) NSArray *supportedTypes;
@property(copy, nonatomic) CLPlacemark *location;
@property(nonatomic) unsigned long long transportTypes;
@property(readonly, nonatomic) long long code;
@end
