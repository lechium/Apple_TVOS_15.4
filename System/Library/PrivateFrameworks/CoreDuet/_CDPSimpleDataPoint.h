//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreDuet/_CDPDataPoint-Protocol.h>

@class NSArray, NSDate, NSString;

@interface _CDPSimpleDataPoint : NSObject <_CDPDataPoint>
{
    _Bool _userIsSender;	// 8 = 0x8
    _Bool _userIsThreadInitiator;	// 9 = 0x9
    NSDate *_timestamp;	// 16 = 0x10
    NSArray *_peopleIdentifiers;	// 24 = 0x18
    NSString *_title;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000cb00e
@property(nonatomic) _Bool userIsThreadInitiator; // @synthesize userIsThreadInitiator=_userIsThreadInitiator;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSArray *peopleIdentifiers; // @synthesize peopleIdentifiers=_peopleIdentifiers;
@property(retain, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) _Bool userIsSender; // @synthesize userIsSender=_userIsSender;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

