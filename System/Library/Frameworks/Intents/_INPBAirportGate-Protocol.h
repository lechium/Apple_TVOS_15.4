//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/NSObject-Protocol.h>

@class NSString, _INPBAirport;

@protocol _INPBAirportGate <NSObject>
@property(readonly, nonatomic) _Bool hasTerminal;
@property(copy, nonatomic) NSString *terminal;
@property(readonly, nonatomic) _Bool hasGate;
@property(copy, nonatomic) NSString *gate;
@property(readonly, nonatomic) _Bool hasAirport;
@property(retain, nonatomic) _INPBAirport *airport;
@end

