//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface TUDiscoverabilitySignal : NSObject
{
    NSString *_identifier;	// 8 = 0x8
    NSString *_context;	// 16 = 0x10
}

+ (id)osBuild;	// IMP=0x000000000002051d
- (void).cxx_destruct;	// IMP=0x00000000000205c7
@property(readonly, nonatomic) NSString *context; // @synthesize context=_context;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)_discoverabilitySignalsStream;	// IMP=0x0000000000020504
- (void)donateSignalWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000001ffdf
- (id)initWithIdentifier:(id)arg1 context:(id)arg2;	// IMP=0x000000000001ff46

@end

