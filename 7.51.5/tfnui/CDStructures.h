//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#pragma mark Function Pointers and Blocks

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CGAffineTransform {
    double a;
    double b;
    double c;
    double d;
    double tx;
    double ty;
};

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    double width;
    double height;
};

struct CTParagraphStyleSetting {
    unsigned int _field1;
    unsigned long long _field2;
    void *_field3;
};

struct NSMutableArray {
    Class _field1;
};

struct NSObject {
    Class _field1;
};

struct TFNDirectionalEdgeInsets {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
};

struct TFNPhotoUILivePhotoBadgeImageCacheKeyData {
    struct CGSize fitSize;
    unsigned long long options;
};

struct UIEdgeInsets {
    double top;
    double left;
    double bottom;
    double right;
};

struct UIOffset {
    double horizontal;
    double vertical;
};

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
};

#pragma mark Typedef'd Structures

typedef struct {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
    double _field5;
    double _field6;
} CDStruct_8727d297;

typedef struct {
    long long _field1;
    int _field2;
    unsigned int _field3;
    long long _field4;
} CDStruct_198678f7;

typedef struct {
    long long _field1;
    long long _field2;
} CDStruct_912cb5d2;

typedef struct {
    unsigned long long _field1;
    double _field2;
    double _field3;
    _Bool _field4;
    struct CGSize _field5;
    _Bool _field6;
    struct CGAffineTransform _field7;
    _Bool _field8;
    double _field9;
    _Bool _field10;
    struct {
        double _field1;
        double _field2;
        double _field3;
        double _field4;
    } _field11;
} CDStruct_56705b1e;

typedef struct {
    double timestamp;
    struct CGPoint position;
} CDStruct_ff86b16f;

typedef struct {
    struct CGPoint _field1;
    struct CGAffineTransform _field2;
} CDStruct_562ed2e6;
