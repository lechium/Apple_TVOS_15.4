//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/NSObject-Protocol.h>

@class NSString;

@protocol _INPBVoiceCommandDeviceInformation <NSObject>
@property(nonatomic) _Bool hasIsHomePodInUltimateMode;
@property(nonatomic) _Bool isHomePodInUltimateMode;
@property(nonatomic) _Bool hasDeviceIdiom;
@property(nonatomic) int deviceIdiom;
- (int)StringAsDeviceIdiom:(NSString *)arg1;
- (NSString *)deviceIdiomAsString:(int)arg1;
@end

