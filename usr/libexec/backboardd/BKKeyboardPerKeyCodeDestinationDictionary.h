//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BSMutableIntegerMap, NSString;

@interface BKKeyboardPerKeyCodeDestinationDictionary : NSObject
{
    BSMutableIntegerMap *_keyCodeDownPerDestination;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000044b6a
@property(readonly, nonatomic) BSMutableIntegerMap *keyCodeDownPerDestination; // @synthesize keyCodeDownPerDestination=_keyCodeDownPerDestination;
- (void)appendDescriptionToFormatter:(id)arg1;	// IMP=0x0010000000044a98
- (void)removeDestinationsForKeyCode:(long long)arg1;	// IMP=0x00100000000449e7
- (void);	// IMP=0x0010000000044889
- (void)setDestinations:(id)arg1 forDownKeyCode:(long long)arg2;	// IMP=0x0010000000044758
- (id)destinationsForDownKeyCode:(long long)arg1;	// IMP=0x0010000000044742
@property(readonly, nonatomic) unsigned long long keyDownCount;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

