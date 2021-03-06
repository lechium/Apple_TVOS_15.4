//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface _EARArtifact : NSObject
{
    struct shared_ptr<quasar::artifact::Artifact> _artifact;	// 8 = 0x8
}

+ (void)initialize;	// IMP=0x00000000005325f4
- (id).cxx_construct;	// IMP=0x0000000000533921
- (void).cxx_destruct;	// IMP=0x0000000000533913
- (_Bool)isEquivalentTo:(id)arg1;	// IMP=0x000000000053385b
- (_Bool)write:(id)arg1;	// IMP=0x00000000005336cf
- (void)minimize;	// IMP=0x000000000053365a
- (_Bool)isMinimalistic;	// IMP=0x000000000053364b
- (id)getContent:(id)arg1;	// IMP=0x0000000000533489
- (_Bool)hasContent:(id)arg1;	// IMP=0x00000000005333e5
- (_Bool)supportsContent:(id)arg1;	// IMP=0x0000000000533341
- (id)getInfo:(id)arg1;	// IMP=0x0000000000533156
- (_Bool)hasInfo:(id)arg1;	// IMP=0x00000000005330b2
- (_Bool)supportsInfo:(id)arg1;	// IMP=0x000000000053300e
- (id)getLocale;	// IMP=0x0000000000532e31
- (id)getVersion;	// IMP=0x0000000000532d3f
- (id)initWithAcceptedContent:(id)arg1 acceptedInfo:(id)arg2 dependent:(id)arg3;	// IMP=0x00000000005325fe

@end

