//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface ANProcessAudio : NSObject
{
}

+ (_Bool)_renderAudioTo:(id)arg1 length:(long long)arg2 engine:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000013fa3
+ (id)_ANAudioEffectToName:(unsigned long long)arg1;	// IMP=0x0000000000013f79
+ (id)_lookupTunings:(unsigned long long)arg1;	// IMP=0x0000000000013ef9
+ (struct AudioComponentDescription)_lookupComponent:(unsigned long long)arg1;	// IMP=0x0000000000013ec9
+ (_Bool)_configureEngine:(id)arg1 player:(id)arg2 effect:(id)arg3 sourceFile:(id)arg4 error:(id *)arg5;	// IMP=0x00000000000139d1
+ (_Bool)process:(id)arg1 to:(id)arg2 withOptions:(unsigned long long)arg3 error:(id *)arg4;	// IMP=0x0000000000013337

@end

