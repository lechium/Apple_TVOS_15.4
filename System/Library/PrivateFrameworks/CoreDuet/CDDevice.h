//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface CDDevice : NSObject
{
    _Bool _isDefaultPaired;	// 8 = 0x8
    unsigned int _identifier;	// 12 = 0xc
    NSString *_modelIdentifier;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000578ac
@property _Bool isDefaultPaired; // @synthesize isDefaultPaired=_isDefaultPaired;
@property(readonly) NSString *modelIdentifier; // @synthesize modelIdentifier=_modelIdentifier;
@property(readonly) unsigned int identifier; // @synthesize identifier=_identifier;
- (_Bool)requestLogDataWithError:(id *)arg1;	// IMP=0x0000000000057873
- (id)readLogDataWithError:(id *)arg1;	// IMP=0x000000000005786b
- (_Bool)setLogDataHandlerWithError:(id *)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000057863
- (_Bool)requestSystemDataWithError:(id *)arg1;	// IMP=0x000000000005785b
- (id)readSystemDataWithError:(id *)arg1;	// IMP=0x000000000005784e
- (_Bool)setSystemDataHandlerWithError:(id *)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000057846
- (id)description;	// IMP=0x0000000000057796
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000005778e
- (_Bool)isEqualToDevice:(id)arg1;	// IMP=0x0000000000057786
- (unsigned long long)hash;	// IMP=0x000000000005777e
- (id)initWithSession:(id)arg1 identifier:(unsigned int)arg2 modelIdentifier:(id)arg3 error:(id *)arg4;	// IMP=0x000000000005775c
- (id)initWithSession:(id)arg1 identifier:(unsigned int)arg2 modelIdentifier:(id)arg3 defaultPaired:(_Bool)arg4 error:(id *)arg5;	// IMP=0x000000000005774e

@end

