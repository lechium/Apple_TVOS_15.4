//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, SKSoundSource;

__attribute__((visibility("hidden")))
@interface SKPlaySound
{
    NSString *_filePath;	// 8 = 0x8
    NSString *_fileName;	// 16 = 0x10
    struct SKCPlaySound *_mycaction;	// 24 = 0x18
    struct CGPoint _position;	// 32 = 0x20
    SKSoundSource *_soundSource;	// 48 = 0x30
}

+ (id)_audioURLWithName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000000000956a2
+ (id)playSoundFileNamed:(id)arg1 atPosition:(struct CGPoint)arg2 waitForCompletion:(_Bool)arg3;	// IMP=0x00000000000951d9
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000094c44
- (void).cxx_destruct;	// IMP=0x000000000009580d
- (id)reversedAction;	// IMP=0x00000000000957f3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000954b3
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000095107
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000094d40
- (id)init;	// IMP=0x0000000000094c4c

@end
