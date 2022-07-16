//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface MPChangeRepeatModeCommand
{
    NSArray *_supportedRepeatTypes;	// 64 = 0x40
    long long _currentRepeatType;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000000238414
@property(nonatomic) long long currentRepeatType; // @synthesize currentRepeatType=_currentRepeatType;
- (id)newCommandEventWithType:(long long)arg1 preservesRepeatMode:(_Bool)arg2;	// IMP=0x00000000002382c7
- (id)newCommandEventWithType:(long long)arg1;	// IMP=0x00000000002382b3
- (id)_mediaRemoteCommandInfoOptions;	// IMP=0x0000000000238002
- (void)setSupportedRepeatTypes:(id)arg1;	// IMP=0x0000000000237f89

@end

