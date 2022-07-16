//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSURL;

@interface CSAudioInjectionFileOption : NSObject
{
    float _scaleFactor;	// 8 = 0x8
    NSURL *_audioURL;	// 16 = 0x10
    struct OpaqueExtAudioFile *_fFile;	// 24 = 0x18
    struct AudioStreamBasicDescription _outASBD;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000008bbe
@property(readonly, nonatomic) float scaleFactor; // @synthesize scaleFactor=_scaleFactor;
@property(nonatomic) struct OpaqueExtAudioFile *fFile; // @synthesize fFile=_fFile;
@property(nonatomic) struct AudioStreamBasicDescription outASBD; // @synthesize outASBD=_outASBD;
@property(readonly, nonatomic) NSURL *audioURL; // @synthesize audioURL=_audioURL;
- (id)description;	// IMP=0x0000000000008b21
- (id)initWithAudioURL:(id)arg1 withScaleFactor:(float)arg2 outASBD:(struct AudioStreamBasicDescription)arg3;	// IMP=0x0000000000008a83

@end

