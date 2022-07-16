//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVPlayerItem, NSArray, NSDate, NSDictionary, NSString;

@interface AVPlayerInterstitialEvent : NSObject
{
    AVPlayerItem *_primaryItem;	// 8 = 0x8
    struct OpaqueFigPlayerInterstitialEvent *_figEvent;	// 16 = 0x10
    NSArray *_templateItems;	// 24 = 0x18
}

+ (id)interstitialEventWithPrimaryItem:(id)arg1 templateItems:(id)arg2 figEvent:(struct OpaqueFigPlayerInterstitialEvent *)arg3;	// IMP=0x000000000001523e
+ (id)interstitialEventWithPrimaryItem:(id)arg1 identifier:(id)arg2 date:(id)arg3 templateItems:(id)arg4 restrictions:(unsigned long long)arg5 resumptionOffset:(CDStruct_1b6d18a9)arg6 playoutLimit:(CDStruct_1b6d18a9)arg7 userDefinedAttributes:(id)arg8;	// IMP=0x0000000000015101
+ (id)interstitialEventWithPrimaryItem:(id)arg1 identifier:(id)arg2 time:(CDStruct_1b6d18a9)arg3 templateItems:(id)arg4 restrictions:(unsigned long long)arg5 resumptionOffset:(CDStruct_1b6d18a9)arg6 playoutLimit:(CDStruct_1b6d18a9)arg7 userDefinedAttributes:(id)arg8;	// IMP=0x0000000000014fd1
- (void).cxx_destruct;	// IMP=0x0000000000015883
- (struct OpaqueFigPlayerInterstitialEvent *)figEvent;	// IMP=0x0000000000015879
@property(readonly, nonatomic) NSDictionary *userDefinedAttributes;
@property(readonly, nonatomic) CDStruct_1b6d18a9 playoutLimit;
@property(readonly, nonatomic) CDStruct_1b6d18a9 resumptionOffset;
@property(readonly, nonatomic) unsigned long long restrictions;
@property(readonly, nonatomic) NSArray *templateItems;
@property(readonly, nonatomic) NSDate *date;
@property(readonly, nonatomic) CDStruct_1b6d18a9 time;
@property(readonly, nonatomic) NSString *identifier;
@property(readonly, nonatomic) __weak AVPlayerItem *primaryItem;
- (unsigned long long)hash;	// IMP=0x0000000000015772
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000156dd
- (id)description;	// IMP=0x0000000000015678
- (void)dealloc;	// IMP=0x000000000001562f
- (id)initWithPrimaryItemAndFigEvent:(id)arg1 templateItems:(id)arg2 figEvent:(struct OpaqueFigPlayerInterstitialEvent *)arg3;	// IMP=0x00000000000155af
- (id)initWithPrimaryItem:(id)arg1 identifier:(id)arg2 time:(CDStruct_1b6d18a9)arg3 date:(id)arg4 templateItems:(id)arg5 restrictions:(unsigned long long)arg6 resumptionOffset:(CDStruct_1b6d18a9)arg7 playoutLimit:(CDStruct_1b6d18a9)arg8 userDefinedAttributes:(id)arg9;	// IMP=0x0000000000015281

@end

